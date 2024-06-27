conf_data = configuration_data()
conf_data.set('version', meson.project_version())
configure_file(input: 'config.h.in',
               output: 'config.h',
               configuration: conf_data)

src = [
    'main.cpp',
    'system.cpp',
    'user.cpp'
]

executable('yanc', sources: src,
  install : true)