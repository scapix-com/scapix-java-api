// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class Attribute_NestHost; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::Attribute_NestHost>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/Attribute$NestHost";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::Attribute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::Attribute_NestHost : public jni::object_base<"jdk/internal/org/objectweb/asm/Attribute$NestHost",
	jdk::internal::org::objectweb::asm_::Attribute>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::Attribute_NestHost> new_object() { return base_::new_object(); }

protected:

	Attribute_NestHost(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_ATTRIBUTE_NESTHOST
