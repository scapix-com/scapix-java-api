// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/UIDefaults_LazyValue.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class UIDefaults_LazyInputMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::UIDefaults_LazyInputMap>
{
	static constexpr fixed_string class_name = "javax/swing/UIDefaults$LazyInputMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::UIDefaults_LazyValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP)
#define SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/UIDefaults.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::UIDefaults_LazyInputMap : public jni::object_base<"javax/swing/UIDefaults$LazyInputMap",
	java::lang::Object,
	javax::swing::UIDefaults_LazyValue>
{
public:

	static jni::ref<javax::swing::UIDefaults_LazyInputMap> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::Object> createValue(jni::ref<javax::swing::UIDefaults> p1) { return call_method<"createValue", jni::ref<java::lang::Object>>(p1); }

protected:

	UIDefaults_LazyInputMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_UIDEFAULTS_LAZYINPUTMAP
