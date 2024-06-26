// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/script/ScriptContext.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::script { class SimpleScriptContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::script::SimpleScriptContext>
{
	static constexpr fixed_string class_name = "javax/script/SimpleScriptContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::script::ScriptContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT)
#define SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Reader.h>
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/script/Bindings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::script::SimpleScriptContext : public jni::object_base<"javax/script/SimpleScriptContext",
	java::lang::Object,
	javax::script::ScriptContext>
{
public:

	static jni::ref<javax::script::SimpleScriptContext> new_object() { return base_::new_object(); }
	void setBindings(jni::ref<javax::script::Bindings> p1, jint p2) { return call_method<"setBindings", void>(p1, p2); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> removeAttribute(jni::ref<java::lang::String> p1, jint p2) { return call_method<"removeAttribute", jni::ref<java::lang::Object>>(p1, p2); }
	void setAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jint p3) { return call_method<"setAttribute", void>(p1, p2, p3); }
	jni::ref<java::io::Writer> getWriter() { return call_method<"getWriter", jni::ref<java::io::Writer>>(); }
	jni::ref<java::io::Reader> getReader() { return call_method<"getReader", jni::ref<java::io::Reader>>(); }
	void setReader(jni::ref<java::io::Reader> p1) { return call_method<"setReader", void>(p1); }
	void setWriter(jni::ref<java::io::Writer> p1) { return call_method<"setWriter", void>(p1); }
	jni::ref<java::io::Writer> getErrorWriter() { return call_method<"getErrorWriter", jni::ref<java::io::Writer>>(); }
	void setErrorWriter(jni::ref<java::io::Writer> p1) { return call_method<"setErrorWriter", void>(p1); }
	jint getAttributesScope(jni::ref<java::lang::String> p1) { return call_method<"getAttributesScope", jint>(p1); }
	jni::ref<javax::script::Bindings> getBindings(jint p1) { return call_method<"getBindings", jni::ref<javax::script::Bindings>>(p1); }
	jni::ref<java::util::List> getScopes() { return call_method<"getScopes", jni::ref<java::util::List>>(); }

protected:

	SimpleScriptContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SCRIPT_SIMPLESCRIPTCONTEXT
