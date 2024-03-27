// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::signature { class SignatureReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::signature::SignatureReader>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/signature/SignatureReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::signature::SignatureReader : public jni::object_base<"jdk/internal/org/objectweb/asm/signature/SignatureReader",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureReader> new_object(jni::ref<java::lang::String> signature) { return base_::new_object(signature); }
	void accept(jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> v) { return call_method<"accept", void>(v); }
	void acceptType(jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> v) { return call_method<"acceptType", void>(v); }

protected:

	SignatureReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_SIGNATURE_SIGNATUREREADER
