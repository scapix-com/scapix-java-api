// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/text/normalizer/UCharacterProperty_IntProperty.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class UCharacterProperty_NormQuickCheckIntProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::UCharacterProperty_NormQuickCheckIntProperty>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/UCharacterProperty$NormQuickCheckIntProperty";
	using base_classes = std::tuple<scapix::java_api::sun::text::normalizer::UCharacterProperty_IntProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::UCharacterProperty_NormQuickCheckIntProperty : public jni::object_base<"sun/text/normalizer/UCharacterProperty$NormQuickCheckIntProperty",
	sun::text::normalizer::UCharacterProperty_IntProperty>
{
public:


protected:

	UCharacterProperty_NormQuickCheckIntProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_UCHARACTERPROPERTY_NORMQUICKCHECKINTPROPERTY
