// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class MuxingAttributeSet_MuxingAttributeNameEnumeration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::MuxingAttributeSet_MuxingAttributeNameEnumeration>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/MuxingAttributeSet$MuxingAttributeNameEnumeration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::MuxingAttributeSet_MuxingAttributeNameEnumeration : public jni::object_base<"javax/swing/text/html/MuxingAttributeSet$MuxingAttributeNameEnumeration",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }

protected:

	MuxingAttributeSet_MuxingAttributeNameEnumeration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_MUXINGATTRIBUTESET_MUXINGATTRIBUTENAMEENUMERATION