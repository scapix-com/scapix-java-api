// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class ClassSpecializer_Factory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::ClassSpecializer_Factory>
{
	static constexpr fixed_string class_name = "java/lang/invoke/ClassSpecializer$Factory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/ClassSpecializer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::ClassSpecializer_Factory : public jni::object_base<"java/lang/invoke/ClassSpecializer$Factory",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::invoke::ClassSpecializer_Factory> new_object(jni::ref<java::lang::invoke::ClassSpecializer> this_0) { return base_::new_object(this_0); }

protected:

	ClassSpecializer_Factory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_CLASSSPECIALIZER_FACTORY
