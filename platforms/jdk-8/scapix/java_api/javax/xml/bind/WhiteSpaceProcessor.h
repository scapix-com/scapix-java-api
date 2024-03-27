// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR_FWD
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::xml::bind { class WhiteSpaceProcessor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::xml::bind::WhiteSpaceProcessor>
{
	static constexpr fixed_string class_name = "javax/xml/bind/WhiteSpaceProcessor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR)
#define SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::xml::bind::WhiteSpaceProcessor : public jni::object_base<"javax/xml/bind/WhiteSpaceProcessor",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> replace(jni::ref<java::lang::String> p1) { return call_static_method<"replace", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::CharSequence> replace(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"replace", jni::ref<java::lang::CharSequence>>(p1); }
	static jni::ref<java::lang::CharSequence> trim(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"trim", jni::ref<java::lang::CharSequence>>(p1); }
	static jni::ref<java::lang::String> collapse(jni::ref<java::lang::String> p1) { return call_static_method<"collapse", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::CharSequence> collapse(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"collapse", jni::ref<java::lang::CharSequence>>(p1); }
	static jboolean isWhiteSpace(jni::ref<java::lang::CharSequence> p1) { return call_static_method<"isWhiteSpace", jboolean>(p1); }
	static jboolean isWhiteSpace(jchar p1) { return call_static_method<"isWhiteSpace", jboolean>(p1); }

protected:

	WhiteSpaceProcessor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_XML_BIND_WHITESPACEPROCESSOR