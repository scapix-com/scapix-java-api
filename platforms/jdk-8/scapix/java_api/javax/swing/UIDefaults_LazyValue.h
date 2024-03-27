// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class UIDefaults_LazyValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::UIDefaults_LazyValue>
{
	static constexpr fixed_string class_name = "javax/swing/UIDefaults$LazyValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE)
#define SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/UIDefaults.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::UIDefaults_LazyValue : public jni::object_base<"javax/swing/UIDefaults$LazyValue",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> createValue(jni::ref<javax::swing::UIDefaults> p1) { return call_method<"createValue", jni::ref<java::lang::Object>>(p1); }

protected:

	UIDefaults_LazyValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYVALUE
