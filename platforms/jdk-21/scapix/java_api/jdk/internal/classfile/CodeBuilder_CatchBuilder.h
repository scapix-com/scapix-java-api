// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class CodeBuilder_CatchBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::CodeBuilder_CatchBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/CodeBuilder$CatchBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::CodeBuilder_CatchBuilder : public jni::object_base<"jdk/internal/classfile/CodeBuilder$CatchBuilder",
	java::lang::Object>
{
public:

	jni::ref<jdk::internal::classfile::CodeBuilder_CatchBuilder> catching(jni::ref<java::lang::constant::ClassDesc> p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"catching", jni::ref<jdk::internal::classfile::CodeBuilder_CatchBuilder>>(p1, p2); }
	jni::ref<jdk::internal::classfile::CodeBuilder_CatchBuilder> catchingMulti(jni::ref<java::util::List> p1, jni::ref<java::util::function::Consumer> p2) { return call_method<"catchingMulti", jni::ref<jdk::internal::classfile::CodeBuilder_CatchBuilder>>(p1, p2); }
	void catchingAll(jni::ref<java::util::function::Consumer> p1) { return call_method<"catchingAll", void>(p1); }

protected:

	CodeBuilder_CatchBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_CATCHBUILDER
