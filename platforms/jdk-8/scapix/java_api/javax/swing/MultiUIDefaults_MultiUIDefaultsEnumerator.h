// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Enumeration.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class MultiUIDefaults_MultiUIDefaultsEnumerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::MultiUIDefaults_MultiUIDefaultsEnumerator>
{
	static constexpr fixed_string class_name = "javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Enumeration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/MultiUIDefaults_MultiUIDefaultsEnumerator_Type.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::MultiUIDefaults_MultiUIDefaultsEnumerator : public jni::object_base<"javax/swing/MultiUIDefaults$MultiUIDefaultsEnumerator",
	java::lang::Object,
	java::util::Enumeration>
{
public:

	using Type = MultiUIDefaults_MultiUIDefaultsEnumerator_Type;

	jboolean hasMoreElements() { return call_method<"hasMoreElements", jboolean>(); }
	jni::ref<java::lang::Object> nextElement() { return call_method<"nextElement", jni::ref<java::lang::Object>>(); }

protected:

	MultiUIDefaults_MultiUIDefaultsEnumerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_MULTIUIDEFAULTS_MULTIUIDEFAULTSENUMERATOR
