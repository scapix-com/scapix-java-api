// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class SupplementaryCharacterData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::SupplementaryCharacterData>
{
	static constexpr fixed_string class_name = "sun/text/SupplementaryCharacterData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA)
#define SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::SupplementaryCharacterData : public jni::object_base<"sun/text/SupplementaryCharacterData",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<sun::text::SupplementaryCharacterData> new_object(jni::ref<jni::array<jint>> table) { return base_::new_object(table); }
	jint getValue(jint index) { return call_method<"getValue", jint>(index); }
	jni::ref<jni::array<jint>> getArray() { return call_method<"getArray", jni::ref<jni::array<jint>>>(); }

protected:

	SupplementaryCharacterData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_SUPPLEMENTARYCHARACTERDATA
