/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkKdTreeWrap.h"
#include "vtkPKdTreeWrap.h"
#include "vtkObjectWrap.h"
#include "vtkMultiProcessControllerWrap.h"
#include "vtkIntArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPKdTreeWrap::ptpl;

VtkPKdTreeWrap::VtkPKdTreeWrap()
{ }

VtkPKdTreeWrap::VtkPKdTreeWrap(vtkSmartPointer<vtkPKdTree> _native)
{ native = _native; }

VtkPKdTreeWrap::~VtkPKdTreeWrap()
{ }

void VtkPKdTreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPKdTree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PKdTree").ToLocalChecked(), ConstructorGetter);
}

void VtkPKdTreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPKdTreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkKdTreeWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkKdTreeWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPKdTreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AssignRegionsContiguous", AssignRegionsContiguous);
	Nan::SetPrototypeMethod(tpl, "assignRegionsContiguous", AssignRegionsContiguous);

	Nan::SetPrototypeMethod(tpl, "AssignRegionsRoundRobin", AssignRegionsRoundRobin);
	Nan::SetPrototypeMethod(tpl, "assignRegionsRoundRobin", AssignRegionsRoundRobin);

	Nan::SetPrototypeMethod(tpl, "BuildLocator", BuildLocator);
	Nan::SetPrototypeMethod(tpl, "buildLocator", BuildLocator);

	Nan::SetPrototypeMethod(tpl, "CreateGlobalDataArrayBounds", CreateGlobalDataArrayBounds);
	Nan::SetPrototypeMethod(tpl, "createGlobalDataArrayBounds", CreateGlobalDataArrayBounds);

	Nan::SetPrototypeMethod(tpl, "CreateProcessCellCountData", CreateProcessCellCountData);
	Nan::SetPrototypeMethod(tpl, "createProcessCellCountData", CreateProcessCellCountData);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetController", GetController);
	Nan::SetPrototypeMethod(tpl, "getController", GetController);

	Nan::SetPrototypeMethod(tpl, "GetProcessAssignedToRegion", GetProcessAssignedToRegion);
	Nan::SetPrototypeMethod(tpl, "getProcessAssignedToRegion", GetProcessAssignedToRegion);

	Nan::SetPrototypeMethod(tpl, "GetProcessCellCountForRegion", GetProcessCellCountForRegion);
	Nan::SetPrototypeMethod(tpl, "getProcessCellCountForRegion", GetProcessCellCountForRegion);

	Nan::SetPrototypeMethod(tpl, "GetProcessListForRegion", GetProcessListForRegion);
	Nan::SetPrototypeMethod(tpl, "getProcessListForRegion", GetProcessListForRegion);

	Nan::SetPrototypeMethod(tpl, "GetRegionAssignment", GetRegionAssignment);
	Nan::SetPrototypeMethod(tpl, "getRegionAssignment", GetRegionAssignment);

	Nan::SetPrototypeMethod(tpl, "GetRegionAssignmentList", GetRegionAssignmentList);
	Nan::SetPrototypeMethod(tpl, "getRegionAssignmentList", GetRegionAssignmentList);

	Nan::SetPrototypeMethod(tpl, "GetRegionAssignmentMapLength", GetRegionAssignmentMapLength);
	Nan::SetPrototypeMethod(tpl, "getRegionAssignmentMapLength", GetRegionAssignmentMapLength);

	Nan::SetPrototypeMethod(tpl, "GetRegionListForProcess", GetRegionListForProcess);
	Nan::SetPrototypeMethod(tpl, "getRegionListForProcess", GetRegionListForProcess);

	Nan::SetPrototypeMethod(tpl, "GetTotalProcessesInRegion", GetTotalProcessesInRegion);
	Nan::SetPrototypeMethod(tpl, "getTotalProcessesInRegion", GetTotalProcessesInRegion);

	Nan::SetPrototypeMethod(tpl, "GetTotalRegionsForProcess", GetTotalRegionsForProcess);
	Nan::SetPrototypeMethod(tpl, "getTotalRegionsForProcess", GetTotalRegionsForProcess);

	Nan::SetPrototypeMethod(tpl, "HasData", HasData);
	Nan::SetPrototypeMethod(tpl, "hasData", HasData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetController", SetController);
	Nan::SetPrototypeMethod(tpl, "setController", SetController);

	ptpl.Reset( tpl );
}

void VtkPKdTreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPKdTree> native = vtkSmartPointer<vtkPKdTree>::New();
		VtkPKdTreeWrap* obj = new VtkPKdTreeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkPKdTreeWrap::AssignRegionsContiguous(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->AssignRegionsContiguous();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::AssignRegionsRoundRobin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->AssignRegionsRoundRobin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::BuildLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildLocator();
}

void VtkPKdTreeWrap::CreateGlobalDataArrayBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateGlobalDataArrayBounds();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::CreateProcessCellCountData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CreateProcessCellCountData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPKdTreeWrap::GetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	vtkMultiProcessController * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetController();
		VtkMultiProcessControllerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMultiProcessControllerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMultiProcessControllerWrap *w = new VtkMultiProcessControllerWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPKdTreeWrap::GetProcessAssignedToRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetProcessAssignedToRegion(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetProcessCellCountForRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetProcessCellCountForRegion(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetProcessListForRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIntArrayWrap *a1 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetProcessListForRegion(
				info[0]->Int32Value(),
				(vtkIntArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetRegionAssignment(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRegionAssignment();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::GetRegionAssignmentList(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIntArrayWrap *a1 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetRegionAssignmentList(
				info[0]->Int32Value(),
				(vtkIntArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetRegionAssignmentMapLength(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRegionAssignmentMapLength();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPKdTreeWrap::GetRegionListForProcess(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIntArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIntArrayWrap *a1 = ObjectWrap::Unwrap<VtkIntArrayWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetRegionListForProcess(
				info[0]->Int32Value(),
				(vtkIntArray *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetTotalProcessesInRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTotalProcessesInRegion(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::GetTotalRegionsForProcess(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetTotalRegionsForProcess(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::HasData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->HasData(
				info[0]->Int32Value(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
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

void VtkPKdTreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	vtkPKdTree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkPKdTreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPKdTreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPKdTreeWrap *w = new VtkPKdTreeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPKdTreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPKdTree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkPKdTreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPKdTreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPKdTreeWrap *w = new VtkPKdTreeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPKdTreeWrap::SetController(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPKdTreeWrap *wrapper = ObjectWrap::Unwrap<VtkPKdTreeWrap>(info.Holder());
	vtkPKdTree *native = (vtkPKdTree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkMultiProcessControllerWrap::ptpl))->HasInstance(info[0]))
	{
		VtkMultiProcessControllerWrap *a0 = ObjectWrap::Unwrap<VtkMultiProcessControllerWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetController(
			(vtkMultiProcessController *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
