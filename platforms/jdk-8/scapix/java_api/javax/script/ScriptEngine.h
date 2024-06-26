// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE_FWD
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::script { class ScriptEngine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::script::ScriptEngine>
{
	static constexpr fixed_string class_name = "javax/script/ScriptEngine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE)
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/script/Bindings.h>
#include <scapix/java_api/javax/script/ScriptContext.h>
#include <scapix/java_api/javax/script/ScriptEngineFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::script::ScriptEngine : public jni::object_base<"javax/script/ScriptEngine",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ARGV() { return get_static_field<"ARGV", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FILENAME() { return get_static_field<"FILENAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENGINE() { return get_static_field<"ENGINE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENGINE_VERSION() { return get_static_field<"ENGINE_VERSION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> NAME() { return get_static_field<"NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LANGUAGE() { return get_static_field<"LANGUAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LANGUAGE_VERSION() { return get_static_field<"LANGUAGE_VERSION", jni::ref<java::lang::String>>(); }

	jni::ref<java::lang::Object> eval(jni::ref<java::lang::String> p1, jni::ref<javax::script::ScriptContext> p2) { return call_method<"eval", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> eval(jni::ref<java::io::Reader> p1, jni::ref<javax::script::ScriptContext> p2) { return call_method<"eval", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> eval(jni::ref<java::lang::String> p1) { return call_method<"eval", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> eval(jni::ref<java::io::Reader> p1) { return call_method<"eval", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> eval(jni::ref<java::lang::String> p1, jni::ref<javax::script::Bindings> p2) { return call_method<"eval", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> eval(jni::ref<java::io::Reader> p1, jni::ref<javax::script::Bindings> p2) { return call_method<"eval", jni::ref<java::lang::Object>>(p1, p2); }
	void put(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"put", void>(p1, p2); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jni::ref<javax::script::Bindings> getBindings(jint p1) { return call_method<"getBindings", jni::ref<javax::script::Bindings>>(p1); }
	void setBindings(jni::ref<javax::script::Bindings> p1, jint p2) { return call_method<"setBindings", void>(p1, p2); }
	jni::ref<javax::script::Bindings> createBindings() { return call_method<"createBindings", jni::ref<javax::script::Bindings>>(); }
	jni::ref<javax::script::ScriptContext> getContext() { return call_method<"getContext", jni::ref<javax::script::ScriptContext>>(); }
	void setContext(jni::ref<javax::script::ScriptContext> p1) { return call_method<"setContext", void>(p1); }
	jni::ref<javax::script::ScriptEngineFactory> getFactory() { return call_method<"getFactory", jni::ref<javax::script::ScriptEngineFactory>>(); }

protected:

	ScriptEngine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SCRIPTENGINE
