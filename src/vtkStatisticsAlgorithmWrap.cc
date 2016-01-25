/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkTableAlgorithmWrap.h"
#include "vtkStatisticsAlgorithmWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAlgorithmOutputWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkStringArrayWrap.h"
#include "vtkDataObjectCollectionWrap.h"
#include "vtkMultiBlockDataSetWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkStatisticsAlgorithmWrap::constructor;

VtkStatisticsAlgorithmWrap::VtkStatisticsAlgorithmWrap()
{ }

VtkStatisticsAlgorithmWrap::VtkStatisticsAlgorithmWrap(vtkSmartPointer<vtkStatisticsAlgorithm> _native)
{ native = _native; }

VtkStatisticsAlgorithmWrap::~VtkStatisticsAlgorithmWrap()
{ }

void VtkStatisticsAlgorithmWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkStatisticsAlgorithmWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkTableAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkStatisticsAlgorithm").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("StatisticsAlgorithm").ToLocalChecked(),tpl->GetFunction());
}

void VtkStatisticsAlgorithmWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddColumn", AddColumn);
	Nan::SetPrototypeMethod(tpl, "addColumn", AddColumn);

	Nan::SetPrototypeMethod(tpl, "AddColumnPair", AddColumnPair);
	Nan::SetPrototypeMethod(tpl, "addColumnPair", AddColumnPair);

	Nan::SetPrototypeMethod(tpl, "Aggregate", Aggregate);
	Nan::SetPrototypeMethod(tpl, "aggregate", Aggregate);

	Nan::SetPrototypeMethod(tpl, "GetAssessNames", GetAssessNames);
	Nan::SetPrototypeMethod(tpl, "getAssessNames", GetAssessNames);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "RequestSelectedColumns", RequestSelectedColumns);
	Nan::SetPrototypeMethod(tpl, "requestSelectedColumns", RequestSelectedColumns);

	Nan::SetPrototypeMethod(tpl, "ResetAllColumnStates", ResetAllColumnStates);
	Nan::SetPrototypeMethod(tpl, "resetAllColumnStates", ResetAllColumnStates);

	Nan::SetPrototypeMethod(tpl, "ResetRequests", ResetRequests);
	Nan::SetPrototypeMethod(tpl, "resetRequests", ResetRequests);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAssessNames", SetAssessNames);
	Nan::SetPrototypeMethod(tpl, "setAssessNames", SetAssessNames);

	Nan::SetPrototypeMethod(tpl, "SetColumnStatus", SetColumnStatus);
	Nan::SetPrototypeMethod(tpl, "setColumnStatus", SetColumnStatus);

	Nan::SetPrototypeMethod(tpl, "SetInputModel", SetInputModel);
	Nan::SetPrototypeMethod(tpl, "setInputModel", SetInputModel);

	Nan::SetPrototypeMethod(tpl, "SetInputModelConnection", SetInputModelConnection);
	Nan::SetPrototypeMethod(tpl, "setInputModelConnection", SetInputModelConnection);

	Nan::SetPrototypeMethod(tpl, "SetLearnOptionParameterConnection", SetLearnOptionParameterConnection);
	Nan::SetPrototypeMethod(tpl, "setLearnOptionParameterConnection", SetLearnOptionParameterConnection);

	Nan::SetPrototypeMethod(tpl, "SetLearnOptionParameters", SetLearnOptionParameters);
	Nan::SetPrototypeMethod(tpl, "setLearnOptionParameters", SetLearnOptionParameters);

}

void VtkStatisticsAlgorithmWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkStatisticsAlgorithmWrap::AddColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::AddColumnPair(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddColumnPair(
				*a0,
				*a1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::Aggregate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectCollectionWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectCollectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkMultiBlockDataSetWrap *a1 = ObjectWrap::Unwrap<VtkMultiBlockDataSetWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->Aggregate(
				(vtkDataObjectCollection *) a0->native.GetPointer(),
				(vtkMultiBlockDataSet *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::GetAssessNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	vtkStringArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAssessNames();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStringArrayWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStringArrayWrap *w = new VtkStringArrayWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticsAlgorithmWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkStatisticsAlgorithmWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	vtkStatisticsAlgorithm * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkStatisticsAlgorithmWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStatisticsAlgorithmWrap *w = new VtkStatisticsAlgorithmWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkStatisticsAlgorithmWrap::RequestSelectedColumns(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->RequestSelectedColumns();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkStatisticsAlgorithmWrap::ResetAllColumnStates(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetAllColumnStates();
}

void VtkStatisticsAlgorithmWrap::ResetRequests(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ResetRequests();
}

void VtkStatisticsAlgorithmWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkStatisticsAlgorithm * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkStatisticsAlgorithmWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkStatisticsAlgorithmWrap *w = new VtkStatisticsAlgorithmWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetAssessNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkStringArrayWrap *a0 = ObjectWrap::Unwrap<VtkStringArrayWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAssessNames(
			(vtkStringArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetColumnStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetColumnStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetInputModel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputModel(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetInputModelConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInputModelConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetLearnOptionParameterConnection(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkAlgorithmOutputWrap *a0 = ObjectWrap::Unwrap<VtkAlgorithmOutputWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLearnOptionParameterConnection(
			(vtkAlgorithmOutput *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkStatisticsAlgorithmWrap::SetLearnOptionParameters(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkStatisticsAlgorithmWrap *wrapper = ObjectWrap::Unwrap<VtkStatisticsAlgorithmWrap>(info.Holder());
	vtkStatisticsAlgorithm *native = (vtkStatisticsAlgorithm *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLearnOptionParameters(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

