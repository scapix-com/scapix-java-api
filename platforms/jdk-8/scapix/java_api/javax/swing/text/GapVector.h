// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class GapVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::GapVector>
{
	static constexpr fixed_string class_name = "javax/swing/text/GapVector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::GapVector : public jni::object_base<"javax/swing/text/GapVector",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::swing::text::GapVector> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::text::GapVector> new_object(jint p1) { return base_::new_object(p1); }

protected:

	GapVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_GAPVECTOR