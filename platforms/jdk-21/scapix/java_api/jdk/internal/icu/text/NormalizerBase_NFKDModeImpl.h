// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::icu::text { class NormalizerBase_NFKDModeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::icu::text::NormalizerBase_NFKDModeImpl>
{
	static constexpr fixed_string class_name = "jdk/internal/icu/text/NormalizerBase$NFKDModeImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::icu::text::NormalizerBase_NFKDModeImpl : public jni::object_base<"jdk/internal/icu/text/NormalizerBase$NFKDModeImpl",
	java::lang::Object>
{
public:


protected:

	NormalizerBase_NFKDModeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ICU_TEXT_NORMALIZERBASE_NFKDMODEIMPL
