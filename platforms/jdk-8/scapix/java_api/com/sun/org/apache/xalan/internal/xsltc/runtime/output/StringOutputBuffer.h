// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/runtime/output/OutputBuffer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::runtime::output { class StringOutputBuffer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::runtime::output::StringOutputBuffer>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/runtime/output/StringOutputBuffer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::runtime::output::StringOutputBuffer : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/runtime/output/StringOutputBuffer",
	java::lang::Object,
	com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::StringOutputBuffer> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> close() { return call_method<"close", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer> append(jni::ref<java::lang::String> p1) { return call_method<"append", jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer> append(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"append", jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer> append(jchar p1) { return call_method<"append", jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::output::OutputBuffer>>(p1); }

protected:

	StringOutputBuffer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_RUNTIME_OUTPUT_STRINGOUTPUTBUFFER