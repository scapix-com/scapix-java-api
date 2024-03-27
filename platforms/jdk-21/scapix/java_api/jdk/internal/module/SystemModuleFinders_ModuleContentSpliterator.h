// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Spliterator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::module { class SystemModuleFinders_ModuleContentSpliterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::module::SystemModuleFinders_ModuleContentSpliterator>
{
	static constexpr fixed_string class_name = "jdk/internal/module/SystemModuleFinders$ModuleContentSpliterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Spliterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/function/Consumer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::module::SystemModuleFinders_ModuleContentSpliterator : public jni::object_base<"jdk/internal/module/SystemModuleFinders$ModuleContentSpliterator",
	java::lang::Object,
	java::util::Spliterator>
{
public:

	jboolean tryAdvance(jni::ref<java::util::function::Consumer> action) { return call_method<"tryAdvance", jboolean>(action); }
	jni::ref<java::util::Spliterator> trySplit() { return call_method<"trySplit", jni::ref<java::util::Spliterator>>(); }
	jint characteristics() { return call_method<"characteristics", jint>(); }
	jlong estimateSize() { return call_method<"estimateSize", jlong>(); }

protected:

	SystemModuleFinders_ModuleContentSpliterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_MODULE_SYSTEMMODULEFINDERS_MODULECONTENTSPLITERATOR