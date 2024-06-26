// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::spec { class EncodedKeySpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::spec::EncodedKeySpec>
{
	static constexpr fixed_string class_name = "java/security/spec/EncodedKeySpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC)
#define SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::spec::EncodedKeySpec : public jni::object_base<"java/security/spec/EncodedKeySpec",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	static jni::ref<java::security::spec::EncodedKeySpec> new_object(jni::ref<jni::array<jbyte>> encodedKey) { return base_::new_object(encodedKey); }
	jni::ref<jni::array<jbyte>> getEncoded() { return call_method<"getEncoded", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> getFormat() { return call_method<"getFormat", jni::ref<java::lang::String>>(); }

protected:

	EncodedKeySpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_SPEC_ENCODEDKEYSPEC
