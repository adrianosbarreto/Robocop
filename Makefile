.PHONY: clean All

All:
	@echo "----------Building project:[ Robocop - Debug ]----------"
	@$(MAKE) -f  "Robocop.mk"
clean:
	@echo "----------Cleaning project:[ Robocop - Debug ]----------"
	@$(MAKE) -f  "Robocop.mk" clean
