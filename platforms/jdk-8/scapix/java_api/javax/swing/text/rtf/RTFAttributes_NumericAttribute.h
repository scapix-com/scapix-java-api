// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/rtf/RTFAttributes_GenericAttribute.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFAttribute.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::rtf { class RTFAttributes_NumericAttribute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::rtf::RTFAttributes_NumericAttribute>
{
	static constexpr fixed_string class_name = "javax/swing/text/rtf/RTFAttributes$NumericAttribute";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::rtf::RTFAttributes_GenericAttribute, scapix::java_api::javax::swing::text::rtf::RTFAttribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/MutableAttributeSet.h>
#include <scapix/java_api/javax/swing/text/rtf/RTFGenerator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::rtf::RTFAttributes_NumericAttribute : public jni::object_base<"javax/swing/text/rtf/RTFAttributes$NumericAttribute",
	javax::swing::text::rtf::RTFAttributes_GenericAttribute,
	javax::swing::text::rtf::RTFAttribute>
{
public:

	static jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute> new_object(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute> new_object(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Number> p4, jint p5, jfloat p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute> NewTwips(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3, jfloat p4, jint p5) { return call_static_method<"NewTwips", jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute>>(p1, p2, p3, p4, p5); }
	static jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute> NewTwips(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::String> p3, jint p4) { return call_static_method<"NewTwips", jni::ref<javax::swing::text::rtf::RTFAttributes_NumericAttribute>>(p1, p2, p3, p4); }
	jboolean set(jni::ref<javax::swing::text::MutableAttributeSet> p1) { return call_method<"set", jboolean>(p1); }
	jboolean set(jni::ref<javax::swing::text::MutableAttributeSet> p1, jint p2) { return call_method<"set", jboolean>(p1, p2); }
	jboolean setDefault(jni::ref<javax::swing::text::MutableAttributeSet> p1) { return call_method<"setDefault", jboolean>(p1); }
	jboolean writeValue(jni::ref<java::lang::Object> p1, jni::ref<javax::swing::text::rtf::RTFGenerator> p2, jboolean p3) { return call_method<"writeValue", jboolean>(p1, p2, p3); }

protected:

	RTFAttributes_NumericAttribute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_RTF_RTFATTRIBUTES_NUMERICATTRIBUTE