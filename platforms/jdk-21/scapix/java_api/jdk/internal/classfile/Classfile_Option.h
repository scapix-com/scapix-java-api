// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Classfile_Option; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Classfile_Option>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Classfile$Option";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Function.h>
#include <scapix/java_api/jdk/internal/classfile/ClassHierarchyResolver.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Classfile_Option : public jni::object_base<"jdk/internal/classfile/Classfile$Option",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::classfile::Classfile_Option> generateStackmap(jboolean b) { return call_static_method<"generateStackmap", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> processDebug(jboolean b) { return call_static_method<"processDebug", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> processLineNumbers(jboolean b) { return call_static_method<"processLineNumbers", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> processUnknownAttributes(jboolean b) { return call_static_method<"processUnknownAttributes", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> constantPoolSharing(jboolean b) { return call_static_method<"constantPoolSharing", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> fixShortJumps(jboolean b) { return call_static_method<"fixShortJumps", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> patchDeadCode(jboolean b) { return call_static_method<"patchDeadCode", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> classHierarchyResolver(jni::ref<jdk::internal::classfile::ClassHierarchyResolver> r) { return call_static_method<"classHierarchyResolver", jni::ref<jdk::internal::classfile::Classfile_Option>>(r); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> attributeMapper(jni::ref<java::util::function::Function> r) { return call_static_method<"attributeMapper", jni::ref<jdk::internal::classfile::Classfile_Option>>(r); }
	static jni::ref<jdk::internal::classfile::Classfile_Option> filterDeadLabels(jboolean b) { return call_static_method<"filterDeadLabels", jni::ref<jdk::internal::classfile::Classfile_Option>>(b); }

protected:

	Classfile_Option(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CLASSFILE_OPTION
