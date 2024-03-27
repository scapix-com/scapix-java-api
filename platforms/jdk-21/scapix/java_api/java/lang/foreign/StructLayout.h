// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/foreign/GroupLayout.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::foreign { class StructLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::foreign::StructLayout>
{
	static constexpr fixed_string class_name = "java/lang/foreign/StructLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::foreign::GroupLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT)
#define SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::foreign::StructLayout : public jni::object_base<"java/lang/foreign/StructLayout",
	java::lang::Object,
	java::lang::foreign::GroupLayout>
{
public:

	jni::ref<java::lang::foreign::StructLayout> withName(jni::ref<java::lang::String> p1) { return call_method<"withName", jni::ref<java::lang::foreign::StructLayout>>(p1); }
	jni::ref<java::lang::foreign::StructLayout> withoutName() { return call_method<"withoutName", jni::ref<java::lang::foreign::StructLayout>>(); }
	jni::ref<java::lang::foreign::StructLayout> withByteAlignment(jlong p1) { return call_method<"withByteAlignment", jni::ref<java::lang::foreign::StructLayout>>(p1); }

protected:

	StructLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_FOREIGN_STRUCTLAYOUT