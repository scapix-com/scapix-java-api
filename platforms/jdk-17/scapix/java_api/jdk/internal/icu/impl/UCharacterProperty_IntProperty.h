// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::impl { class UCharacterProperty_IntProperty; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::impl::UCharacterProperty_IntProperty>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/impl/UCharacterProperty$IntProperty";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::impl::UCharacterProperty_IntProperty : public jni::object_base<"jdk/internal/icu/impl/UCharacterProperty$IntProperty",
	java::lang::Object>
{
public:


protected:

	UCharacterProperty_IntProperty(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_IMPL_UCHARACTERPROPERTY_INTPROPERTY
