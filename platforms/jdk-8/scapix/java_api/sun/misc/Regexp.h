// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_REGEXP_FWD
#define SCAPIX_JAVA_API_SUN_MISC_REGEXP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class Regexp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::Regexp>
{
	static constexpr fixed_string class_name = "sun/misc/Regexp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_REGEXP)
#define SCAPIX_JAVA_API_SUN_MISC_REGEXP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::Regexp : public jni::object_base<"sun/misc/Regexp",
	java::lang::Object>
{
public:

	jboolean ignoreCase() { return get_field<"ignoreCase", jboolean>(); }
	void ignoreCase(jboolean v) { set_field<"ignoreCase", jboolean>(v); }
	jni::ref<java::lang::String> exp() { return get_field<"exp", jni::ref<java::lang::String>>(); }
	void exp(jni::ref<java::lang::String> v) { set_field<"exp", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> prefix() { return get_field<"prefix", jni::ref<java::lang::String>>(); }
	void prefix(jni::ref<java::lang::String> v) { set_field<"prefix", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> suffix() { return get_field<"suffix", jni::ref<java::lang::String>>(); }
	void suffix(jni::ref<java::lang::String> v) { set_field<"suffix", jni::ref<java::lang::String>>(v); }
	jboolean exact() { return get_field<"exact", jboolean>(); }
	void exact(jboolean v) { set_field<"exact", jboolean>(v); }
	jint prefixLen() { return get_field<"prefixLen", jint>(); }
	void prefixLen(jint v) { set_field<"prefixLen", jint>(v); }
	jint suffixLen() { return get_field<"suffixLen", jint>(); }
	void suffixLen(jint v) { set_field<"suffixLen", jint>(v); }
	jint totalLen() { return get_field<"totalLen", jint>(); }
	void totalLen(jint v) { set_field<"totalLen", jint>(v); }
	jni::ref<jni::array<java::lang::String>> mids() { return get_field<"mids", jni::ref<jni::array<java::lang::String>>>(); }
	void mids(jni::ref<jni::array<java::lang::String>> v) { set_field<"mids", jni::ref<jni::array<java::lang::String>>>(v); }

	static jni::ref<sun::misc::Regexp> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	Regexp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_REGEXP
