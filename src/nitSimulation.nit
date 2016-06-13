module nitSimulation 

import gamnit::flat
import gamnit::limit_fps
import date
import nitConstraints



abstract class Entity 
	# The position of the entity in the console 
	var position: Point3d[Float] is writable 
	# The dimensions of the entity 
	var dimensions : Dimensions_2d is noinit 
	# The mass of the entity 
	var mass : Float is noinit  
	# The state of the entity (static or dynamic)
	var is_dynamic : Bool is noinit
	# Player entity or noinit
	var is_moovable : Bool is noinit
	#Entity is on colision
	var is_colision : Bool = false 
	# The vector of the entity
	var vector: Vector_2d is noinit 
	# The texture of the entity
	var texture : Texture 

	init 
	do
		# Default values 
		self.vector = new Vector_2d(0.0,0.0)
		self.dimensions = new Dimensions_2d(0.0,0.0)
	end	 
	# This function updates the state of the entity 
	fun dynamic (s: Bool) do self.is_dynamic = s
	# This function updates the entity
	fun update(dt : Float) do update_position
		
	# This function updates the position of the entity
	private fun update_position 
	do
		if self.is_dynamic == true then 
			self.position.x += self.vector.v_x
			self.position.y += self.vector.v_y	
		end 
	end 
	# This function performs a play back on time (dt) a repositionates the entity 
	fun play_back
	do
			self.position.x -= self.vector.v_x
			self.position.y -= self.vector.v_y
	end
	# Set a vector to an entity 
	fun set_vector(v: Vector_2d)
	do
		self.vector.v_x = v.v_x
		self.vector.v_y = v.v_y
	end
	# Set the dimensions of the entity 
	fun set_dimensions (dimensions: Dimensions_2d)
	do
		self.dimensions.height = dimensions.height
		self.dimensions.width = dimensions.width
	end

end

abstract class Shape

	super Entity
 	# The volume of the shape 
	var volume : Float is noinit
	# The density of the shape
	var density : Float = 1.0 

	init 
	do
		compute_volume
		compute_mass
	end 	
	# Check if a point is the outlines of the shape 
	fun check_outline(p: Point3d[Float]): Bool is abstract
	# Set the density 
	fun set_density (d: Float) do self.density = d
	# Compute the mass 
	protected fun compute_mass do self.mass = volume*density
	# Compute the volume
	protected fun compute_volume is abstract

end


class Polygone

	super Shape
	# The vertices of the polygone
	var vertices: Array[Point3d[Float]] = new Array[Point3d[Float]]

	init
	do
	# Set defaults values
		self.is_dynamic = false
		self.is_moovable = false
		compute_vertices
	end

	redef fun compute_volume do self.volume = dimensions.height*dimensions.width
	# Compute the vertices using the position ad the dimensions of the shape 
	fun compute_vertices 
	do
		var p = self.position
	
		vertices.add(new Point3d[Float]( (p.x - dimensions.width/2.0).to_f, p.y + dimensions.height/2.0.to_f ,0.0))
		vertices.add(new Point3d[Float]( (p.x + dimensions.width/2.0).to_f, p.y + dimensions.height/2.0.to_f ,0.0))
		vertices.add(new Point3d[Float]( (p.x - dimensions.width/2.0).to_f, p.y - dimensions.height/2.0.to_f ,0.0))
		vertices.add(new Point3d[Float]( (p.x + dimensions.width/2.0).to_f, p.y - dimensions.height/2.0.to_f ,0.0))
		
	end



	redef fun check_outline(p: Point3d[Float]): Bool do
		#TODO
	return false 
	end

end

class Circle

	super Shape
	# The radius
	var radius: Float is noinit
	# The Elasticity coef 
	var coef_elas : Float is noinit 

	init 
	do
		# Set defaults values 
		self.radius = 45.5
		self.is_dynamic = true
		self.is_moovable = false 
		self.coef_elas = 0.20
		set_dimensions(new Dimensions_2d(2.0*radius,2.0*radius))
		
	end

	fun set_elasticity(e: Float) do self.coef_elas = e 
	# Compute the distance beetwen the circle and a point 
	fun distance_topoint(p: Point3d[Float]): Float do return  ((p.x - self.position.x)*(p.x - self.position.x) + (p.y - self.position.y)*(p.y - self.position.y)).sqrt 

	redef fun compute_volume do self.volume = density * radius.pow(2.0)
	
	redef fun check_outline(p: Point3d[Float]): Bool
	do
		var distance = ((p.x - self.position.x)*(p.x - self.position.x) + (p.y - self.position.y)*(p.y - self.position.y)).sqrt

		if distance < radius or distance == self.radius then 
			return true 
		else 
			return false 	
		end
	end

	
end

class Player 
super Circle 	

var name : String 

	init 
	do
		self.is_dynamic = false 
		self.is_moovable = true
	end

	redef fun update_position 
	do
		self.position.x += self.vector.v_x
		self.position.y += self.vector.v_y
		self.check_limit
	end

	fun check_limit 
	do
		if (self.position.x.abs + self.radius / 2.0) > 340.0 - 50.0 then

			if self.position.x > 0.0 then
				self.vector.v_x = (self.vector.v_x / -2.0)
				self.position.x -= 10.0
			else
				self.vector.v_x = (self.vector.v_x/ -2.0)
				self.position.x += 10.0
			end
		end	
	end
end
