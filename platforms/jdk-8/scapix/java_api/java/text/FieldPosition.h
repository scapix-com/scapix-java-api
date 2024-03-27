// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class FieldPosition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::FieldPosition>
{
	static constexpr fixed_string class_name = "java/text/FieldPosition";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION)
#define SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/Format_Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::FieldPosition : public jni::object_base<"java/text/FieldPosition",
	java::lang::Object>
{
public:

	static jni::ref<java::text::FieldPosition> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::text::FieldPosition> new_object(jni::ref<java::text::Format_Field> p1) { return base_::new_object(p1); }
	static jni::ref<java::text::FieldPosition> new_object(jni::ref<java::text::Format_Field> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::text::Format_Field> getFieldAttribute() { return call_method<"getFieldAttribute", jni::ref<java::text::Format_Field>>(); }
	jint getField() { return call_method<"getField", jint>(); }
	jint getBeginIndex() { return call_method<"getBeginIndex", jint>(); }
	jint getEndIndex() { return call_method<"getEndIndex", jint>(); }
	void setBeginIndex(jint p1) { return call_method<"setBeginIndex", void>(p1); }
	void setEndIndex(jint p1) { return call_method<"setEndIndex", void>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FieldPosition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_FIELDPOSITION