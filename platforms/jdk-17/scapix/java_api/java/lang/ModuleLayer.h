// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class ModuleLayer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::ModuleLayer>
{
	static constexpr fixed_string class_name = "java/lang/ModuleLayer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER)
#define SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/ModuleLayer_Controller.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/module/Configuration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/function/Function.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::ModuleLayer : public jni::object_base<"java/lang/ModuleLayer",
	java::lang::Object>
{
public:

	using Controller = ModuleLayer_Controller;

	jni::ref<java::lang::ModuleLayer> defineModulesWithOneLoader(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::lang::ClassLoader> parentLoader) { return call_method<"defineModulesWithOneLoader", jni::ref<java::lang::ModuleLayer>>(cf, parentLoader); }
	jni::ref<java::lang::ModuleLayer> defineModulesWithManyLoaders(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::lang::ClassLoader> parentLoader) { return call_method<"defineModulesWithManyLoaders", jni::ref<java::lang::ModuleLayer>>(cf, parentLoader); }
	jni::ref<java::lang::ModuleLayer> defineModules(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::util::function::Function> clf) { return call_method<"defineModules", jni::ref<java::lang::ModuleLayer>>(cf, clf); }
	static jni::ref<java::lang::ModuleLayer_Controller> defineModulesWithOneLoader(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::util::List> parentLayers, jni::ref<java::lang::ClassLoader> parentLoader) { return call_static_method<"defineModulesWithOneLoader", jni::ref<java::lang::ModuleLayer_Controller>>(cf, parentLayers, parentLoader); }
	static jni::ref<java::lang::ModuleLayer_Controller> defineModulesWithManyLoaders(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::util::List> parentLayers, jni::ref<java::lang::ClassLoader> parentLoader) { return call_static_method<"defineModulesWithManyLoaders", jni::ref<java::lang::ModuleLayer_Controller>>(cf, parentLayers, parentLoader); }
	static jni::ref<java::lang::ModuleLayer_Controller> defineModules(jni::ref<java::lang::module::Configuration> cf, jni::ref<java::util::List> parentLayers, jni::ref<java::util::function::Function> clf) { return call_static_method<"defineModules", jni::ref<java::lang::ModuleLayer_Controller>>(cf, parentLayers, clf); }
	jni::ref<java::lang::module::Configuration> configuration() { return call_method<"configuration", jni::ref<java::lang::module::Configuration>>(); }
	jni::ref<java::util::List> parents() { return call_method<"parents", jni::ref<java::util::List>>(); }
	jni::ref<java::util::Set> modules() { return call_method<"modules", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Optional> findModule(jni::ref<java::lang::String> name) { return call_method<"findModule", jni::ref<java::util::Optional>>(name); }
	jni::ref<java::lang::ClassLoader> findLoader(jni::ref<java::lang::String> name) { return call_method<"findLoader", jni::ref<java::lang::ClassLoader>>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::ModuleLayer> empty() { return call_static_method<"empty", jni::ref<java::lang::ModuleLayer>>(); }
	static jni::ref<java::lang::ModuleLayer> boot() { return call_static_method<"boot", jni::ref<java::lang::ModuleLayer>>(); }

protected:

	ModuleLayer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_MODULELAYER
