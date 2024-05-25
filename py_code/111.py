def print_models(a, completed_models):
	while a:
		current_design = a.pop()
		print(f"Printing model: {current_design}")
		completed_models.append(current_design)
def show_completed_models(completed_models):
	print("\nThe following models have been printed:")
	for completed_model in completed_models:
		print(completed_model)
unprinted_designs = ['phone case', 'robot pendant', 'dodecahedron']
completed_models = []
print_models(unprinted_designs[:], completed_models)
'''for i in unprinted_designs:
	print(i)'''
print(unprinted_designs)
