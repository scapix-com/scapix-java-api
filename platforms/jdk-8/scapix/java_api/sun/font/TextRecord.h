// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD_FWD
#define SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class TextRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::TextRecord>
{
	static constexpr fixed_string class_name = "sun/font/TextRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD)
#define SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::TextRecord : public jni::object_base<"sun/font/TextRecord",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jchar>> text() { return get_field<"text", jni::ref<jni::array<jchar>>>(); }
	void text(jni::ref<jni::array<jchar>> v) { set_field<"text", jni::ref<jni::array<jchar>>>(v); }
	jint start() { return get_field<"start", jint>(); }
	void start(jint v) { set_field<"start", jint>(v); }
	jint limit() { return get_field<"limit", jint>(); }
	void limit(jint v) { set_field<"limit", jint>(v); }
	jint min() { return get_field<"min", jint>(); }
	void min(jint v) { set_field<"min", jint>(v); }
	jint max() { return get_field<"max", jint>(); }
	void max(jint v) { set_field<"max", jint>(v); }

	static jni::ref<sun::font::TextRecord> new_object() { return base_::new_object(); }
	void init(jni::ref<jni::array<jchar>> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"init", void>(p1, p2, p3, p4, p5); }

protected:

	TextRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_TEXTRECORD
