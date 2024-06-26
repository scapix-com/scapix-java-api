// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AttributeValue.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class PageAttributes_PrintQualityType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::PageAttributes_PrintQualityType>
{
	static constexpr fixed_string class_name = "java/awt/PageAttributes$PrintQualityType";
	using base_classes = std::tuple<scapix::java_api::java::awt::AttributeValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE)
#define SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::PageAttributes_PrintQualityType : public jni::object_base<"java/awt/PageAttributes$PrintQualityType",
	java::awt::AttributeValue>
{
public:

	static jni::ref<java::awt::PageAttributes_PrintQualityType> HIGH() { return get_static_field<"HIGH", jni::ref<java::awt::PageAttributes_PrintQualityType>>(); }
	static jni::ref<java::awt::PageAttributes_PrintQualityType> NORMAL() { return get_static_field<"NORMAL", jni::ref<java::awt::PageAttributes_PrintQualityType>>(); }
	static jni::ref<java::awt::PageAttributes_PrintQualityType> DRAFT() { return get_static_field<"DRAFT", jni::ref<java::awt::PageAttributes_PrintQualityType>>(); }


protected:

	PageAttributes_PrintQualityType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PAGEATTRIBUTES_PRINTQUALITYTYPE
