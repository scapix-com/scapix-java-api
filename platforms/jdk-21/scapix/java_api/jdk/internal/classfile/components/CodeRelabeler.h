// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/CodeTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::components { class CodeRelabeler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::components::CodeRelabeler>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/components/CodeRelabeler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::CodeTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/java/util/function/BiFunction.h>
#include <scapix/java_api/jdk/internal/classfile/CodeBuilder.h>
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::components::CodeRelabeler : public jni::object_base<"jdk/internal/classfile/components/CodeRelabeler",
	java::lang::Object,
	jdk::internal::classfile::CodeTransform>
{
public:

	static jni::ref<jdk::internal::classfile::components::CodeRelabeler> of() { return call_static_method<"of", jni::ref<jdk::internal::classfile::components::CodeRelabeler>>(); }
	static jni::ref<jdk::internal::classfile::components::CodeRelabeler> of(jni::ref<java::util::Map> map) { return call_static_method<"of", jni::ref<jdk::internal::classfile::components::CodeRelabeler>>(map); }
	static jni::ref<jdk::internal::classfile::components::CodeRelabeler> of(jni::ref<java::util::function::BiFunction> mapFunction) { return call_static_method<"of", jni::ref<jdk::internal::classfile::components::CodeRelabeler>>(mapFunction); }
	jni::ref<jdk::internal::classfile::Label> relabel(jni::ref<jdk::internal::classfile::Label> p1, jni::ref<jdk::internal::classfile::CodeBuilder> p2) { return call_method<"relabel", jni::ref<jdk::internal::classfile::Label>>(p1, p2); }

protected:

	CodeRelabeler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODERELABELER
