// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class RowFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::RowFilter>
{
	static constexpr fixed_string class_name = "javax/swing/RowFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER)
#define SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Iterable.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/javax/swing/RowFilter_ComparisonType.h>
#include <scapix/java_api/javax/swing/RowFilter_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::RowFilter : public jni::object_base<"javax/swing/RowFilter",
	java::lang::Object>
{
public:

	using ComparisonType = RowFilter_ComparisonType;
	using Entry = RowFilter_Entry;

	static jni::ref<javax::swing::RowFilter> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::RowFilter> regexFilter(jni::ref<java::lang::String> p1, jni::ref<jni::array<jint>> p2) { return call_static_method<"regexFilter", jni::ref<javax::swing::RowFilter>>(p1, p2); }
	static jni::ref<javax::swing::RowFilter> dateFilter(jni::ref<javax::swing::RowFilter_ComparisonType> p1, jni::ref<java::util::Date> p2, jni::ref<jni::array<jint>> p3) { return call_static_method<"dateFilter", jni::ref<javax::swing::RowFilter>>(p1, p2, p3); }
	static jni::ref<javax::swing::RowFilter> numberFilter(jni::ref<javax::swing::RowFilter_ComparisonType> p1, jni::ref<java::lang::Number> p2, jni::ref<jni::array<jint>> p3) { return call_static_method<"numberFilter", jni::ref<javax::swing::RowFilter>>(p1, p2, p3); }
	static jni::ref<javax::swing::RowFilter> orFilter(jni::ref<java::lang::Iterable> p1) { return call_static_method<"orFilter", jni::ref<javax::swing::RowFilter>>(p1); }
	static jni::ref<javax::swing::RowFilter> andFilter(jni::ref<java::lang::Iterable> p1) { return call_static_method<"andFilter", jni::ref<javax::swing::RowFilter>>(p1); }
	static jni::ref<javax::swing::RowFilter> notFilter(jni::ref<javax::swing::RowFilter> p1) { return call_static_method<"notFilter", jni::ref<javax::swing::RowFilter>>(p1); }
	jboolean include(jni::ref<javax::swing::RowFilter_Entry> p1) { return call_method<"include", jboolean>(p1); }

protected:

	RowFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_ROWFILTER
