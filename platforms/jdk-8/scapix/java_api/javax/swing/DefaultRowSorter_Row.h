// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DefaultRowSorter_Row; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DefaultRowSorter_Row>
{
	static constexpr fixed_string class_name = "javax/swing/DefaultRowSorter$Row";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/DefaultRowSorter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::DefaultRowSorter_Row : public jni::object_base<"javax/swing/DefaultRowSorter$Row",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jni::ref<javax::swing::DefaultRowSorter_Row> new_object(jni::ref<javax::swing::DefaultRowSorter> p1, jint p2) { return base_::new_object(p1, p2); }
	jint compareTo(jni::ref<javax::swing::DefaultRowSorter_Row> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	DefaultRowSorter_Row(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTROWSORTER_ROW
