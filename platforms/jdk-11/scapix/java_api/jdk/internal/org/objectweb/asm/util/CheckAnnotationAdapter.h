// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/AnnotationVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class CheckAnnotationAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::CheckAnnotationAdapter>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/CheckAnnotationAdapter";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::AnnotationVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::CheckAnnotationAdapter : public jni::object_base<"jdk/internal/org/objectweb/asm/util/CheckAnnotationAdapter",
	jdk::internal::org::objectweb::asm_::AnnotationVisitor>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckAnnotationAdapter> new_object(jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> av) { return base_::new_object(av); }
	void visit(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"visit", void>(name, value); }
	void visitEnum(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> value) { return call_method<"visitEnum", void>(name, desc, value); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(name, desc); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitArray(jni::ref<java::lang::String> name) { return call_method<"visitArray", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(name); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	CheckAnnotationAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKANNOTATIONADAPTER
