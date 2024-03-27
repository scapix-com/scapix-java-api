// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::script { class ScriptEngineManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::script::ScriptEngineManager>
{
	static constexpr fixed_string class_name = "javax/script/ScriptEngineManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/script/Bindings.h>
#include <scapix/java_api/javax/script/ScriptEngine.h>
#include <scapix/java_api/javax/script/ScriptEngineFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::script::ScriptEngineManager : public jni::object_base<"javax/script/ScriptEngineManager",
	java::lang::Object>
{
public:

	static jni::ref<javax::script::ScriptEngineManager> new_object() { return base_::new_object(); }
	static jni::ref<javax::script::ScriptEngineManager> new_object(jni::ref<java::lang::ClassLoader> p1) { return base_::new_object(p1); }
	void setBindings(jni::ref<javax::script::Bindings> p1) { return call_method<"setBindings", void>(p1); }
	jni::ref<javax::script::Bindings> getBindings() { return call_method<"getBindings", jni::ref<javax::script::Bindings>>(); }
	void put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::script::ScriptEngine> getEngineByName(jni::ref<java::lang::String> p1) { return call_method<"getEngineByName", jni::ref<javax::script::ScriptEngine>>(p1); }
	jni::ref<javax::script::ScriptEngine> getEngineByExtension(jni::ref<java::lang::String> p1) { return call_method<"getEngineByExtension", jni::ref<javax::script::ScriptEngine>>(p1); }
	jni::ref<javax::script::ScriptEngine> getEngineByMimeType(jni::ref<java::lang::String> p1) { return call_method<"getEngineByMimeType", jni::ref<javax::script::ScriptEngine>>(p1); }
	jni::ref<java::util::List> getEngineFactories() { return call_method<"getEngineFactories", jni::ref<java::util::List>>(); }
	void registerEngineName(jni::ref<java::lang::String> p1, jni::ref<javax::script::ScriptEngineFactory> p2) { return call_method<"registerEngineName", void>(p1, p2); }
	void registerEngineMimeType(jni::ref<java::lang::String> p1, jni::ref<javax::script::ScriptEngineFactory> p2) { return call_method<"registerEngineMimeType", void>(p1, p2); }
	void registerEngineExtension(jni::ref<java::lang::String> p1, jni::ref<javax::script::ScriptEngineFactory> p2) { return call_method<"registerEngineExtension", void>(p1, p2); }

protected:

	ScriptEngineManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINEMANAGER