// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::table { class TableRowSorter_ComparableComparator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::table::TableRowSorter_ComparableComparator>
{
	static constexpr fixed_string class_name = "javax/swing/table/TableRowSorter$ComparableComparator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::table::TableRowSorter_ComparableComparator : public jni::object_base<"javax/swing/table/TableRowSorter$ComparableComparator",
	java::lang::Object,
	java::util::Comparator>
{
public:

	jint compare(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	TableRowSorter_ComparableComparator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLEROWSORTER_COMPARABLECOMPARATOR
