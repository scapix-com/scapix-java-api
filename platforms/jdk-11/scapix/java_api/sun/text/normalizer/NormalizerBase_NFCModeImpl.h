// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::normalizer { class NormalizerBase_NFCModeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::normalizer::NormalizerBase_NFCModeImpl>
{
	static constexpr fixed_string class_name = "sun/text/normalizer/NormalizerBase$NFCModeImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL)
#define SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::normalizer::NormalizerBase_NFCModeImpl : public jni::object_base<"sun/text/normalizer/NormalizerBase$NFCModeImpl",
	java::lang::Object>
{
public:


protected:

	NormalizerBase_NFCModeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_NORMALIZER_NORMALIZERBASE_NFCMODEIMPL
