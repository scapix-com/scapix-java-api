// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE_FWD
#define SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::text { class IntHashtable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::text::IntHashtable>
{
	static constexpr fixed_string class_name = "sun/text/IntHashtable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE)
#define SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::text::IntHashtable : public jni::object_base<"sun/text/IntHashtable",
	java::lang::Object>
{
public:

	static jni::ref<sun::text::IntHashtable> new_object() { return base_::new_object(); }
	static jni::ref<sun::text::IntHashtable> new_object(jint p1) { return base_::new_object(p1); }
	jint size() { return call_method<"size", jint>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	void put(jint p1, jint p2) { return call_method<"put", void>(p1, p2); }
	jint get(jint p1) { return call_method<"get", jint>(p1); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }
	jint getDefaultValue() { return call_method<"getDefaultValue", jint>(); }
	void setDefaultValue(jint p1) { return call_method<"setDefaultValue", void>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void putInternal(jint p1, jint p2) { return call_method<"putInternal", void>(p1, p2); }

protected:

	IntHashtable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_TEXT_INTHASHTABLE