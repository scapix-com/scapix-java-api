// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/rtf/RTFAttributes_GenericAttribute.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFAttributes_BooleanAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFAttributes_BooleanAttribute>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFAttributes$BooleanAttribute";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::rtf::RTFAttributes_GenericAttribute, scapix::java_api::javax::swing::text::rtf::RTFAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFGenerator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::rtf::RTFAttributes_BooleanAttribute : public jni::object_base<"javax/swing/text/rtf/RTFAttributes$BooleanAttribute",
	javax::swing::text::rtf::RTFAttributes_GenericAttribute,
	javax::swing::text::rtf::RTFAttribute>
{
public:

	static jni::ref<javax::swing::text::rtf::RTFAttributes_BooleanAttribute> new_object(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3, jboolean p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::swing::text::rtf::RTFAttributes_BooleanAttribute> new_object(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3) { return base_::new_object(p1, p2, p3); }
	jboolean set(jni::ref<javax::swing::text::MutableAttributeSet> p1) { return call_method<"set", jboolean>(p1); }
	jboolean set(jni::ref<javax::swing::text::MutableAttributeSet> p1, jint p2) { return call_method<"set", jboolean>(p1, p2); }
	jboolean setDefault(jni::ref<javax::swing::text::MutableAttributeSet> p1) { return call_method<"setDefault", jboolean>(p1); }
	jboolean writeValue(jni::ref<java::lang::Object> p1, jni::ref<javax::swing::text::rtf::RTFGenerator> p2, jboolean p3) { return call_method<"writeValue", jboolean>(p1, p2, p3); }

protected:

	RTFAttributes_BooleanAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_BOOLEANATTRIBUTE
