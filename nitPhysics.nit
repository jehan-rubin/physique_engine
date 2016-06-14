module nitPhysics

import nitSimulation
import nitConstraints


class Collision
 
	# This function will check if there is a collision between two entities 
	fun check_collision(e1: Entity, e2: Entity)
	do
		
		var dx = e2.position.x-e1.position.x
		
		if dx < 0.0 then dx = dx*(-1.0) 
				
		var dy = e2.position.y-e1.position.y
		
		if dy < 0.0 then dy = dy * (-1.0)


		if e1 isa Circle and e2 isa Polygone then if dx <= e1.radius + (e2.dimensions.width/2.0) and dy <= e1.radius + (e2.dimensions.height/2.0) then resolve_collision(e1,e2)


		if e1 isa Circle and e2 isa Circle then if e1.distance_topoint(e2.position) <= e1.radius + e2.radius then resolve_collision(e1,e2)
	end

	# This function will resolve the collision 
	private fun resolve_collision (e1: Entity, e2: Entity) 
	do 

		if e1 isa Circle and e2 isa Polygone then 
				if (e1.position.x  <= e2.position.x + e2.dimensions.width/2.0) and (e1.position.x >= e2.position.x - e2.dimensions.width/2.0) then 
					e1.play_back
					e1.vector.v_y *= -e1.coef_elas
				end

				if (e1.position.y  <= e2.position.y + e2.dimensions.height/2.0) and (e1.position.y >= e2.position.y - e2.dimensions.height/2.0) then 
					e1.play_back
					e1.vector.v_x *= -e1.coef_elas
				end
		end 

		if e1 isa Circle and e2 isa Circle then vectorial_behaviour(e1,e2)

	end
	# This function will compute the behaviour of the vectors after the collision 
	private fun vectorial_behaviour(e1: Entity, e2: Entity)
	do	 			
            var normalized_vector_e1_e2 = (new Vector_2d (e1.position.x - e2.position.x, e1.position.y - e2.position.y)).get_normalized_vector

            var normalized_Scalaire_e1 = ( (normalized_vector_e1_e2.v_x * e1.vector.v_x) + (normalized_vector_e1_e2.v_y * e1.vector.v_y))
            var normalized_Scalaire_e2 = ( (normalized_vector_e1_e2.v_x * e2.vector.v_x) + (normalized_vector_e1_e2.v_y * e2.vector.v_y))
 
            var resX = (normalized_vector_e1_e2.v_x * normalized_Scalaire_e2) - (normalized_vector_e1_e2.v_x * normalized_Scalaire_e1)
            var resY = (normalized_vector_e1_e2.v_y * normalized_Scalaire_e2) - (normalized_vector_e1_e2.v_y * normalized_Scalaire_e1)

            	e1.play_back	 		
            	if e1 isa Player then 
            		e1.vector.v_x = ((e1.vector.v_x + resX)) / 10.0
	            	e1.vector.v_y = ((e1.vector.v_y + resY)) / 10.0
            	else
            		e1.vector.v_x = ((e1.vector.v_x + resX))
	            	e1.vector.v_y = ((e1.vector.v_y + resY))
            	end
	           
	       

	        
	            e2.play_back
	            if e2 isa Player then
		            e2.vector.v_x = ((e2.vector.v_x - resX)) / 10.0
		            e2.vector.v_y = ((e2.vector.v_y - resY)) / 10.0
		        else
		        	e2.vector.v_x = ((e2.vector.v_x - resX))
		            e2.vector.v_y = ((e2.vector.v_y - resY))
		        end        
	end
end

abstract class Force
	# The intensity of the force 
	var intensity: Float 
	# The vector of the force 
	var vector: Vector_2d is noinit 
	# Apply the effect of the force to an entity 
	fun apply_force(e: Entity) is abstract 
	# Update the value of the intensity 
	fun update_intensity is abstract

end

class Gravity
	
	super Force
	# Init the vector of the gravity 
	init do	vector = new Vector_2d(0.0, -0.01)
	
	redef fun apply_force (e: Entity) 
	do 
		if e.is_dynamic == true then 
			self.vector.intensify(intensity)
			e.vector.add(self.vector)
		end
	end 
	
end