// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::bidi { class BidiBase_ImpTabPair; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::bidi::BidiBase_ImpTabPair>
{
	static constexpr fixed_string class_name = "sun/text/bidi/BidiBase$ImpTabPair";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR)
#define SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::text::bidi::BidiBase_ImpTabPair : public jni::object_base<"sun/text/bidi/BidiBase$ImpTabPair",
	java::lang::Object>
{
public:


protected:

	BidiBase_ImpTabPair(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_IMPTABPAIR
