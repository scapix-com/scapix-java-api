// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/text/normalizer/NormalizerBase_Mode.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class NormalizerBase_NFKCMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::NormalizerBase_NFKCMode>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/NormalizerBase$NFKCMode";
	using base_classes = std::tuple<scapix::java_api::sun::text::normalizer::NormalizerBase_Mode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::NormalizerBase_NFKCMode : public jni::object_base<"sun/text/normalizer/NormalizerBase$NFKCMode",
	sun::text::normalizer::NormalizerBase_Mode>
{
public:


protected:

	NormalizerBase_NFKCMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFKCMODE
