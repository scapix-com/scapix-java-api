// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/tools/FileObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class JavaFileObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::JavaFileObject>
{
	static constexpr fixed_string class_name = "javax/tools/JavaFileObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::tools::FileObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/lang/model/element/Modifier.h>
#include <scapix/java_api/javax/lang/model/element/NestingKind.h>
#include <scapix/java_api/javax/tools/JavaFileObject_Kind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::JavaFileObject : public jni::object_base<"javax/tools/JavaFileObject",
	java::lang::Object,
	javax::tools::FileObject>
{
public:

	using Kind = JavaFileObject_Kind;

	jni::ref<javax::tools::JavaFileObject_Kind> getKind() { return call_method<"getKind", jni::ref<javax::tools::JavaFileObject_Kind>>(); }
	jboolean isNameCompatible(jni::ref<java::lang::String> p1, jni::ref<javax::tools::JavaFileObject_Kind> p2) { return call_method<"isNameCompatible", jboolean>(p1, p2); }
	jni::ref<javax::lang::model::element::NestingKind> getNestingKind() { return call_method<"getNestingKind", jni::ref<javax::lang::model::element::NestingKind>>(); }
	jni::ref<javax::lang::model::element::Modifier> getAccessLevel() { return call_method<"getAccessLevel", jni::ref<javax::lang::model::element::Modifier>>(); }

protected:

	JavaFileObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_JAVAFILEOBJECT