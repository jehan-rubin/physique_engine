NITC=../../../bin/nitc
NITLS=../../../bin/nitls

all: bin/engine

bin/engine: $(shell ${NITLS} -M src/engine.nit linux) ${NITC} pre-build
	${NITC} src/engine.nit -m linux -o $@

bin/texture_atlas_parser: src/texture_atlas_parser.nit
	${NITC} src/texture_atlas_parser.nit -o $@

src/spritesheet_city.nit: bin/texture_atlas_parser
	bin/texture_atlas_parser art/sheet.xml --dir src/ -n spritesheet

pre-build: src/controls.nit src/spritesheet_city.nit

check: bin/engine
	NIT_TESTING=true bin/engine

# ---
