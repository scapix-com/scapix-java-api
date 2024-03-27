// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text::bidi { class BidiBase_BidiPairedBracketType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::bidi::BidiBase_BidiPairedBracketType>
{
	static constexpr fixed_string class_name = "sun/text/bidi/BidiBase$BidiPairedBracketType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE)
#define SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::bidi::BidiBase_BidiPairedBracketType : public jni::object_base<"sun/text/bidi/BidiBase$BidiPairedBracketType",
	java::lang::Object>
{
public:

	static jint NONE() { return get_static_field<"NONE", jint>(); }
	static jint OPEN() { return get_static_field<"OPEN", jint>(); }
	static jint CLOSE() { return get_static_field<"CLOSE", jint>(); }
	static jint COUNT() { return get_static_field<"COUNT", jint>(); }


protected:

	BidiBase_BidiPairedBracketType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_BIDI_BIDIBASE_BIDIPAIREDBRACKETTYPE
