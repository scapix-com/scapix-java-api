// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/icu/text/NormalizerBase_Mode.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class NormalizerBase_NONEMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::NormalizerBase_NONEMode>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/NormalizerBase$NONEMode";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::icu::text::NormalizerBase_Mode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::text::NormalizerBase_NONEMode : public jni::object_base<"jdk/internal/icu/text/NormalizerBase$NONEMode",
	jdk::internal::icu::text::NormalizerBase_Mode>
{
public:


protected:

	NormalizerBase_NONEMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NONEMODE
