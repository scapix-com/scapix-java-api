// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class CharsetMapping; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::CharsetMapping>
{
	static constexpr fixed_string class_name = "sun/nio/cs/CharsetMapping";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING)
#define SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/nio/cs/CharsetMapping_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::CharsetMapping : public jni::object_base<"sun/nio/cs/CharsetMapping",
	java::lang::Object>
{
public:

	using Entry = CharsetMapping_Entry;

	static jchar UNMAPPABLE_DECODING() { return get_static_field<"UNMAPPABLE_DECODING", jchar>(); }
	static jint UNMAPPABLE_ENCODING() { return get_static_field<"UNMAPPABLE_ENCODING", jint>(); }

	static jni::ref<sun::nio::cs::CharsetMapping> new_object() { return base_::new_object(); }
	jchar decodeSingle(jint p1) { return call_method<"decodeSingle", jchar>(p1); }
	jchar decodeDouble(jint p1, jint p2) { return call_method<"decodeDouble", jchar>(p1, p2); }
	jni::ref<jni::array<jchar>> decodeSurrogate(jint p1, jni::ref<jni::array<jchar>> p2) { return call_method<"decodeSurrogate", jni::ref<jni::array<jchar>>>(p1, p2); }
	jni::ref<jni::array<jchar>> decodeComposite(jni::ref<sun::nio::cs::CharsetMapping_Entry> p1, jni::ref<jni::array<jchar>> p2) { return call_method<"decodeComposite", jni::ref<jni::array<jchar>>>(p1, p2); }
	jint encodeChar(jchar p1) { return call_method<"encodeChar", jint>(p1); }
	jint encodeSurrogate(jchar p1, jchar p2) { return call_method<"encodeSurrogate", jint>(p1, p2); }
	jboolean isCompositeBase(jni::ref<sun::nio::cs::CharsetMapping_Entry> p1) { return call_method<"isCompositeBase", jboolean>(p1); }
	jint encodeComposite(jni::ref<sun::nio::cs::CharsetMapping_Entry> p1) { return call_method<"encodeComposite", jint>(p1); }
	static jni::ref<sun::nio::cs::CharsetMapping> get(jni::ref<java::io::InputStream> p1) { return call_static_method<"get", jni::ref<sun::nio::cs::CharsetMapping>>(p1); }

protected:

	CharsetMapping(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_CHARSETMAPPING
