// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/icu/impl/UCharacterProperty_IntProperty.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class UCharacterProperty_CombiningClassIntProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::UCharacterProperty_CombiningClassIntProperty>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/UCharacterProperty$CombiningClassIntProperty";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::icu::impl::UCharacterProperty_IntProperty>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::impl::UCharacterProperty_CombiningClassIntProperty : public jni::object_base<"jdk/internal/icu/impl/UCharacterProperty$CombiningClassIntProperty",
	jdk::internal::icu::impl::UCharacterProperty_IntProperty>
{
public:


protected:

	UCharacterProperty_CombiningClassIntProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_COMBININGCLASSINTPROPERTY
