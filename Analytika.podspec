Pod::Spec.new do |spec|
  spec.name         = 'Analytika'
  spec.version      = '0.69.0'
  spec.summary      = 'Analytika SDK'
  spec.homepage     = 'https://github.com/careem/analytika'

  spec.authors      = { 'Team Cerberus - Careem' => 'captain-cerberus@careem.com' }

  spec.platform     = :ios

  spec.source       = { :http => 'https://artifactory-pro.careem-internal.com/' }
  spec.ios.deployment_target  = '13.0'

  spec.ios.vendored_frameworks = 'Analytika.xcframework'
end
