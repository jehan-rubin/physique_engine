module engine

import world
import nitSimulation
import spritesheet
import gamnit::flat
import gamnit::display_linux
import gamnit::limit_fps
import nitConstraints 

# Class App is the main class of this application
redef class App	

redef fun maximum_fps do return 60.0

	var world = new World

	var entities = new Array[Entity]

	# Function on_create loading the elements of the world
	redef fun on_create
	do		
		super
		
		world.add_force(new Gravity(0.0))
		draw_walls
		draw_squars
		create_player
		load_world_entities
	end

	# Function update updating the behavior of the entities
	redef fun update(dt)
	do	
		world.update(dt)
	end

	# Function draw_walls creating new wall, add his texture and add this entity to the array of entities
	fun draw_walls
	do
		var wall_top = new Polygone(new Point3d[Float](0.0,411.0,0.0), new Texture ("images/wall_horizontal.jpg"))
		var wall_bottom = new Polygone(new Point3d[Float](0.0,-411.0,0.0), new Texture ("images/wall_horizontal.jpg"))
		var wall_right = new Polygone(new Point3d[Float](411.0,0.0,0.0), new Texture ("images/wall_vertical.jpg"))
		var wall_left = new Polygone(new Point3d[Float](-411.0,0.0,0.0), new Texture ("images/wall_vertical.jpg"))

		wall_top.set_dimensions(new Dimensions_2d(20.0,800.0))
		wall_bottom.set_dimensions(new Dimensions_2d(20.0,800.0))
		wall_right.set_dimensions(new Dimensions_2d (800.0,20.0))
		wall_left.set_dimensions(new Dimensions_2d(800.0,20.0))

		entities.add(wall_top)
		entities.add(wall_bottom)
		entities.add(wall_right)
		entities.add(wall_left)
	end
	
	# Function draw_squars creating new circle, add his texture and add this entity to the array of entities
	fun draw_squars
	do
		var s1 = new Circle(new Point3d[Float](0.0,0.0,0.0), (new Spritesheet).ufo_green)
		var random = 10.0	
		s1.set_vector(new Vector_2d (random.rand,random.rand))	
		s1.set_elasticity(1.0)
		entities.add(s1)
	end

	fun create_player 
	do
		var p1 = new Player(new Point3d[Float](0.0,-300.0,0.0), (new Spritesheet).ufo_yellow, "player1")
		var p2 = new Player(new Point3d[Float](0.0,300.0,0.0), (new Spritesheet).ufo_yellow, "player2")

		p1.set_vector(new Vector_2d (0.0,0.0))
		p2.set_vector(new Vector_2d(0.0,0.0))
		print p1.name

		entities.add(p1)
		entities.add(p2)

	end
	
	# Function load_world_entities loading all entities in on_create function
	fun load_world_entities
	do
		for e in self.entities do world.add_entity(e)
		
		for e in world.entities
		do
			sprites.add new Sprite (e.texture, e.position)
		end
	end


	redef fun accept_event(event)
	do
		if event isa QuitEvent then
			exit 0
		else if event isa KeyEvent then
			var move = event.move
			var move2 = event.move_bis
			if move == 1.0 then
				for e in self.entities do
					if e isa Player and e.name =="player1" then 
						world.apply_event(move, e)
					end
				end				
				
			else if move == -1.0 then
				for e in self.entities do
					if e isa Player and  e.name == "player1" then 
						world.apply_event(move, e)
					end
				end	
				
			else if move == 0.0 then
			 	for e in self.entities do
					if e isa Player then 
						world.apply_event(move, e)
					end
				end	
			end

			if move2 == 1.0 then
				for e in self.entities do
					if e isa Player and e.name =="player2" then 
						world.apply_event(move2, e)
					end
				end				
				
			else if move2 == -1.0 then
				for e in self.entities do
					if e isa Player and  e.name == "player2" then 
						world.apply_event(move2, e)
					end
				end	
				
			else if move2 == 0.0 then
			 	for e in self.entities do
					if e isa Player then 
						world.apply_event(move2, e)
					end
				end	
			end
		
		end

		return false
	end
end

redef class KeyEvent 

	fun move : Float 	
	do
		if is_arrow_right then
			return 1.0 
		else if is_arrow_left then 
			return -1.0 
		else
			return 0.0
		end
	end

	fun move_bis : Float
	do
		if name == "e" then
			return 1.0 
		else if name =="a" then 
			return -1.0 
		else
			return 0.0
		end
	end
end