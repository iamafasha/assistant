assistant_sources = [
  'main.c',
  'assistant-application.c',
  'assistant-window.c',
]

assistant_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1'),
]

assistant_sources += gnome.compile_resources('assistant-resources',
  'assistant.gresource.xml',
  c_name: 'assistant'
)

executable('assistant', assistant_sources,
  dependencies: assistant_deps,
       install: true,
)
