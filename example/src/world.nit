module world 


import date
import nitConstraints
import nitPhysics
import nitSimulation

class World 
	# List of entities 
	var entities= new Array[Entity]	
	# List of forces in the world, these forces will be applied to each entity 
	var forces_applied: Array[Force] = new Array[Force]
	# Function to add an entity to the list of entities 
	fun add_entity (e: Entity)
	do
		self.entities.add e
		load_entity(e)
	end 
	# Function to load an entity in the console 
	private fun load_entity (e: Entity)	do 	e.texture.load		
	# Function to add a force to the list of forces 
	fun add_force(f: Force)	do self.forces_applied.add f
	# Function to update the world, this will apply the forces effects and update the state (position, vectors, ...) of each entity 
	fun update(dt: Float)
	do	
		apply_forces_entities

		for i in [0 .. entities.length-1] do for j in  [ i+1 .. entities.length-1] do check_collision(entities[j], entities[i]) # check collisions

		for e in entities do e.update(dt)
	end
	# Check collision between two entities 
	private fun check_collision(e1: Entity, e2: Entity) do
		var collision = new Collision 
		 collision.check_collision(e1, e2)
		
	end  
	# Apply the effect of forces to each entity 
	private fun apply_forces_entities do for e in self.entities do for f in forces_applied do f.apply_force(e)

	fun apply_event(control : Float, player : Player)
	do
		for i in [0 .. entities.length-1] do 
			for j in  [ i+1 .. entities.length-1] do
				if entities[j] == player then	
					if control == 1.0 or control == -1.0 then									
						entities[j].vector.v_x += control
					else
						entities[j].vector.v_y += (control / 10.0)
					end					
				end
			end
		end
	end
end 


		
		